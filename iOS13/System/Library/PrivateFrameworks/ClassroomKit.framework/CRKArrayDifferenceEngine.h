/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setConfiguration:(id<CRKArrayDifferenceConfiguration>)arg1 ;
-(id<CRKArrayDifferenceConfiguration>)configuration;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3 ;
-(void)updateWithNewArray:(id)arg1 ;
@end

