/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol IKNetworkRequestLoader <NSObject>
@property (nonatomic,copy) NSString * parentIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(id)arg1;
-(NSString *)identifier;
-(id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;

@end

