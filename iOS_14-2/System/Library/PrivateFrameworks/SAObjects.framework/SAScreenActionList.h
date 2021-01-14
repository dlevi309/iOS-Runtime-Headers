/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)appId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)viewId;
-(NSString *)mainEntitySemanticData;
-(void)setMainEntitySemanticData:(NSString *)arg1 ;
-(void)setViewId:(NSURL *)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
@end

