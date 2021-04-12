/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSDate;

@interface PDComment : NSObject {

	CGPoint mPosition;
	NSString* mText;
	unsigned long long mAuthorId;
	NSDate* mDate;
	unsigned mIndex;
	PDComment* parent;
	NSString* _author;

}

@property (nonatomic,retain) NSString * author;              //@synthesize author=_author - In the implementation block
@property (retain) PDComment * parent; 
-(id)init;
-(id)description;
-(PDComment *)parent;
-(void)setParent:(PDComment *)arg1 ;
-(id)date;
-(unsigned)index;
-(CGPoint)position;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setAuthorId:(unsigned long long)arg1 ;
-(unsigned long long)authorId;
@end

