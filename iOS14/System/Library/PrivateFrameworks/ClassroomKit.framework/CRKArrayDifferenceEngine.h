/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKArrayDifferenceConfiguration;
@class NSObject, NSString;

@interface CRKArrayDifferenceEngine : NSObject {

	NSObject* mObject;
	NSString* mKeyPath;
	id<CRKArrayDifferenceConfiguration> _configuration;

}

@property (nonatomic,retain) id<CRKArrayDifferenceConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)identityConfiguration;
+(id)configurationWithIncomingItemsIdentifierFunction:(/*^block*/id)arg1 publishedItemsIdentifierFunction:(/*^block*/id)arg2 ;
-(id<CRKArrayDifferenceConfiguration>)configuration;
-(void)setConfiguration:(id<CRKArrayDifferenceConfiguration>)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3 ;
-(void)updateWithNewArray:(id)arg1 ;
@end

