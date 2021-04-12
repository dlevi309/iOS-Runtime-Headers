/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSArray *)topology;
-(void)setTopology:(NSArray *)arg1 ;
@end

