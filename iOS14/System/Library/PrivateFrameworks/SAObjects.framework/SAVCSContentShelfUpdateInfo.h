/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSString * targetShelfViewId; 
@property (nonatomic,copy) NSString * targetViewId; 
@property (nonatomic,copy) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentShelfUpdateInfo;
+(id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPageNumber:(long long)arg1 ;
-(long long)pageNumber;
-(NSString *)targetShelfViewId;
-(void)setTargetShelfViewId:(NSString *)arg1 ;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end

