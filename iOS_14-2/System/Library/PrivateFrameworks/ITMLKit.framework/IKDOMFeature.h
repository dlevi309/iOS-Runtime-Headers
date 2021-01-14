/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKAppContext;


@protocol IKDOMFeature <NSObject>
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@optional
-(void)migrateToViewElement:(id)arg1;

@required
+(id)makeFeatureJSObjectForFeature:(id)arg1;
-(IKAppContext *)appContext;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end

