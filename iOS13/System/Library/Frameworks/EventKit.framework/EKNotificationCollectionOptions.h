/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject {

	EKSource* _source;
	NSString* _externalID;
	NSString* _externalIDTag;

}

@property (nonatomic,readonly) EKSource * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                 //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * externalIDTag;              //@synthesize externalIDTag=_externalIDTag - In the implementation block
-(id)description;
-(EKSource *)source;
-(NSString *)externalID;
-(NSString *)externalIDTag;
-(id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3 ;
@end

