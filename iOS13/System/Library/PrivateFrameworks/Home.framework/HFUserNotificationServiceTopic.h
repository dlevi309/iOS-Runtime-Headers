/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFIconDescriptor;
@class NSSet, NSString;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {

	NSSet* _serviceTypes;
	NSSet* _accessoryCategoryTypes;
	NSString* _topicName;
	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,copy,readonly) NSSet * serviceTypes;                        //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessoryCategoryTypes;              //@synthesize accessoryCategoryTypes=_accessoryCategoryTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicName;                        //@synthesize topicName=_topicName - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSSet *)serviceTypes;
-(NSString *)topicName;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4 ;
-(NSSet *)accessoryCategoryTypes;
-(id)initWithServiceType:(id)arg1 topicName:(id)arg2 ;
@end

