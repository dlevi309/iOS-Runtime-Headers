/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASItnAlignment : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long firstPostItnCharPos; 
@property (assign,nonatomic) long long firstPreItnTokenIndex; 
@property (assign,nonatomic) long long lastPostItnCharPos; 
@property (assign,nonatomic) long long lastPreItnTokenIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itnAlignment;
+(id)itnAlignmentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)firstPostItnCharPos;
-(void)setFirstPostItnCharPos:(long long)arg1 ;
-(long long)firstPreItnTokenIndex;
-(void)setFirstPreItnTokenIndex:(long long)arg1 ;
-(long long)lastPostItnCharPos;
-(void)setLastPostItnCharPos:(long long)arg1 ;
-(long long)lastPreItnTokenIndex;
-(void)setLastPreItnTokenIndex:(long long)arg1 ;
@end

