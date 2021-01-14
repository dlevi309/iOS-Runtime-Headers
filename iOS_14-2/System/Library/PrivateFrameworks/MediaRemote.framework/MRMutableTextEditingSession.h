/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRTextEditingSession.h>

@class NSString, MRTextEditingAttributes;

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (nonatomic,copy) NSString * text; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,retain) MRTextEditingAttributes * attributes; 
-(void)setAttributes:(MRTextEditingAttributes *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
@end

