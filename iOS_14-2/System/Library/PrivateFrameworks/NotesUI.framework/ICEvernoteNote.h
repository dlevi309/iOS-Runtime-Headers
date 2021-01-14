/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface ICEvernoteNote : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _content;
	NSDate* _created;
	NSDate* _updated;
	NSArray* _resources;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * content;               //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSDate * created;                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                 //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(NSArray *)resources;
-(void)setCreated:(NSDate *)arg1 ;
-(NSDate *)created;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)updated;
-(void)setResources:(NSArray *)arg1 ;
-(id)description;
-(void)setUpdated:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
@end

