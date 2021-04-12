/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * mainEntitySemanticData; 
@property (nonatomic,copy) NSURL * viewId; 
+(id)list;
+(id)listWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSURL *)viewId;
-(NSString *)mainEntitySemanticData;
-(void)setMainEntitySemanticData:(NSString *)arg1 ;
-(void)setViewId:(NSURL *)arg1 ;
@end

