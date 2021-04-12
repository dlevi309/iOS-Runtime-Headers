/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)index;
-(CGPoint)position;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(PDComment *)parent;
-(id)init;
-(void)setIndex:(unsigned)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)setParent:(PDComment *)arg1 ;
-(id)description;
-(id)text;
-(void)setPosition:(CGPoint)arg1 ;
-(id)date;
-(void)setAuthorId:(unsigned long long)arg1 ;
-(unsigned long long)authorId;
@end

