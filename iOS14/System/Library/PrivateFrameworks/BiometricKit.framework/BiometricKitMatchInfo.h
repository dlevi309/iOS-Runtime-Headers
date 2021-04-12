/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(void)setDetails:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)details;
-(NSArray *)topology;
-(void)dealloc;
-(void)setTopology:(NSArray *)arg1 ;
@end

