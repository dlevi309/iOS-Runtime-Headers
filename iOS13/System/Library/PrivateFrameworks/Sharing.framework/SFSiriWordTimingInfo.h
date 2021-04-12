/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


#import <Sharing/Sharing-Structs.h>
@class NSString;

@interface SFSiriWordTimingInfo : NSObject {

	NSString* _localizedText;
	double _timeOffset;
	NSString* _wordID;
	NSRange _textRange;

}

@property (nonatomic,copy) NSString * localizedText;              //@synthesize localizedText=_localizedText - In the implementation block
@property (assign,nonatomic) double timeOffset;                   //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) NSRange textRange;                   //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,copy) NSString * wordID;                     //@synthesize wordID=_wordID - In the implementation block
+(id)serializableArrayWithTimingInfoArray:(id)arg1 ;
+(id)timingInfoArrayWithSerializableArray:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(NSRange)textRange;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
-(void)setWordID:(NSString *)arg1 ;
-(void)setTextRange:(NSRange)arg1 ;
-(NSString *)wordID;
@end

