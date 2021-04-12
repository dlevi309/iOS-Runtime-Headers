/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) MRTextInputTraits inputTraits; 
-(void)setPrompt:(NSString *)arg1 ;
-(void)setInputTraits:(MRTextInputTraits)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
@end

