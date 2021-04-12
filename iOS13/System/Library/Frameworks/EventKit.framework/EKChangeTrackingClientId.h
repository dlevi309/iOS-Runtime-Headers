/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithSuffix:(id)arg1 ;
-(NSString *)suffix;
-(id)initWithCustomClientId:(id)arg1 suffix:(id)arg2 ;
-(NSString *)customClientId;
-(id)initWithCustomClientId:(id)arg1 ;
-(CADChangeTrackingClientId *)CADChangeTrackingClientId;
@end

