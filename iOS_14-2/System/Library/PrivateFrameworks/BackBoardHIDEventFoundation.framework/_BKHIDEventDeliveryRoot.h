/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/


@class NSString, NSArray, NSSet;

@interface _BKHIDEventDeliveryRoot : NSObject {

	NSString* _identifier;
	NSArray* _dispatchingRules;
	NSSet* _resolutions;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * dispatchingRules;              //@synthesize dispatchingRules=_dispatchingRules - In the implementation block
@property (nonatomic,retain) NSSet * resolutions;                     //@synthesize resolutions=_resolutions - In the implementation block
-(void)setDispatchingRules:(NSArray *)arg1 ;
-(NSSet *)resolutions;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setResolutions:(NSSet *)arg1 ;
-(NSArray *)dispatchingRules;
@end

