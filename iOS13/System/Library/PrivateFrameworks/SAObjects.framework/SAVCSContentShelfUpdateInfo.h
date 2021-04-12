/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(id)groupIdentifier;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)pageNumber;
-(void)setPageNumber:(long long)arg1 ;
-(id)encodedClassName;
-(NSString *)targetShelfViewId;
-(void)setTargetShelfViewId:(NSString *)arg1 ;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end

