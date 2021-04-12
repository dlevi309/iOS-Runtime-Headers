/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
*/


#import <MessagesComplication/MessagesComplication-Structs.h>
@class NSString, NSDictionary;

@interface CKMessagesComplicationDataContext : NSObject {

	long long _family;
	unsigned long long _unreadCount;
	NSString* _bubbleText;
	NSDictionary* _textAttributes;
	CGPoint _bubbleTextOrigin;
	CGRect _backgroundFrame;
	CGRect _imageFrame;

}

@property (assign,nonatomic) long long family;                            //@synthesize family=_family - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,nonatomic) CGRect backgroundFrame;                      //@synthesize backgroundFrame=_backgroundFrame - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                           //@synthesize imageFrame=_imageFrame - In the implementation block
@property (nonatomic,copy) NSString * bubbleText;                         //@synthesize bubbleText=_bubbleText - In the implementation block
@property (assign,nonatomic) CGPoint bubbleTextOrigin;                    //@synthesize bubbleTextOrigin=_bubbleTextOrigin - In the implementation block
@property (nonatomic,retain) NSDictionary * textAttributes;               //@synthesize textAttributes=_textAttributes - In the implementation block
-(id)init;
-(long long)family;
-(void)setFamily:(long long)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(CGRect)backgroundFrame;
-(unsigned long long)unreadCount;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(CGRect)imageFrame;
-(void)setImageFrame:(CGRect)arg1 ;
-(NSString *)bubbleText;
-(void)setBubbleText:(NSString *)arg1 ;
-(id)initWithUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 specs:(id)arg4 ;
-(CGPoint)bubbleTextOrigin;
-(void)setBackgroundFrame:(CGRect)arg1 ;
-(void)setBubbleTextOrigin:(CGPoint)arg1 ;
@end

