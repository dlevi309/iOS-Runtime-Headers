/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

