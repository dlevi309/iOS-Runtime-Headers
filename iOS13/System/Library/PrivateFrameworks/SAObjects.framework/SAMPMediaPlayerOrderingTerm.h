/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaPlayerOrderingDirection; 
@property (assign,nonatomic) int mediaPlayerSearchProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaPlayerOrderingTerm;
+(id)mediaPlayerOrderingTermWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaPlayerOrderingDirection;
-(void)setMediaPlayerOrderingDirection:(NSString *)arg1 ;
-(int)mediaPlayerSearchProperty;
-(void)setMediaPlayerSearchProperty:(int)arg1 ;
@end

