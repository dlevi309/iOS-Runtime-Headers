/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (assign,nonatomic) BOOL backgroundNeeded; 
@property (nonatomic,copy) NSString * imageDownloadType; 
@property (nonatomic,retain) SAUIDecoratedText * monogram; 
@property (nonatomic,copy) NSString * placeholderImage; 
+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPlaceholderImage:(NSString *)arg1 ;
-(NSString *)placeholderImage;
-(void)setMonogram:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(SAUIDecoratedText *)monogram;
-(BOOL)backgroundNeeded;
-(void)setBackgroundNeeded:(BOOL)arg1 ;
-(NSString *)imageDownloadType;
-(void)setImageDownloadType:(NSString *)arg1 ;
@end

