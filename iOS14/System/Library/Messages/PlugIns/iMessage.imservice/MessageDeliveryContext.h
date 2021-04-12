/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSArray;

@interface MessageDeliveryContext : NSObject {

	BOOL _success;
	BOOL _fromMeToMe;
	BOOL _shouldDeactivate;
	unsigned _error;
	NSArray* _displayIDs;

}

@property (nonatomic,readonly) NSArray * displayIDs;               //@synthesize displayIDs=_displayIDs - In the implementation block
@property (nonatomic,readonly) BOOL success;                       //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) unsigned error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL fromMeToMe;                    //@synthesize fromMeToMe=_fromMeToMe - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeactivate;              //@synthesize shouldDeactivate=_shouldDeactivate - In the implementation block
-(BOOL)success;
-(NSArray *)displayIDs;
-(unsigned)error;
-(id)initWithDisplayIDs:(id)arg1 didSucceed:(BOOL)arg2 withError:(unsigned)arg3 isFromMeToMe:(BOOL)arg4 shouldDeactivate:(BOOL)arg5 ;
-(BOOL)fromMeToMe;
-(BOOL)shouldDeactivate;
@end

