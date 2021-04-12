/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * managed_id; 
@property (nonatomic,retain) NSString * managed_filename; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) BOOL x_apple_autoarchived; 
@property (nonatomic,retain) NSString * x_apple_filename; 
@property (nonatomic,retain) NSString * x_apple_ews_attachmentid; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)size;
-(void)setData:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)filename;
-(void)setSize:(int)arg1 ;
-(BOOL)isBinary;
-(NSString *)fmtype;
-(NSString *)managed_id;
-(void)setFmtype:(NSString *)arg1 ;
-(void)setX_apple_filename:(NSString *)arg1 ;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)managed_filename;
-(NSString *)x_apple_filename;
-(void)setManaged_id:(NSString *)arg1 ;
-(BOOL)x_apple_autoarchived;
-(void)setX_apple_autoarchived:(BOOL)arg1 ;
-(void)setManaged_filename:(NSString *)arg1 ;
-(NSString *)x_apple_ews_attachmentid;
-(void)setX_apple_ews_attachmentid:(NSString *)arg1 ;
@end

