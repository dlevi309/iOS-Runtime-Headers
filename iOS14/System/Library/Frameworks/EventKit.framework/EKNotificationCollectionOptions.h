/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)externalIDTag;
-(NSString *)externalID;
-(id)description;
-(id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3 ;
-(EKSource *)source;
@end

