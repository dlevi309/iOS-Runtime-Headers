/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSString, CADChangeTrackingClientId;

@interface EKChangeTrackingClientId : NSObject {

	NSString* _suffix;
	NSString* _customClientId;

}

@property (nonatomic,copy,readonly) NSString * suffix;                                             //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * customClientId;                                     //@synthesize customClientId=_customClientId - In the implementation block
@property (nonatomic,readonly) CADChangeTrackingClientId * CADChangeTrackingClientId; 
-(NSString *)customClientId;
-(id)init;
-(id)initWithCustomClientId:(id)arg1 ;
-(id)initWithCustomClientId:(id)arg1 suffix:(id)arg2 ;
-(CADChangeTrackingClientId *)CADChangeTrackingClientId;
-(NSString *)suffix;
-(id)initWithSuffix:(id)arg1 ;
@end

