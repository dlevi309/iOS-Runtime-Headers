/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSArray, NSString;

@interface TMLUITableViewSection : NSObject {

	NSArray* _rows;
	NSString* _header;
	NSString* _footer;

}

@property (nonatomic,copy) NSArray * rows;                          //@synthesize rows=_rows - In the implementation block
@property (nonatomic,copy) NSString * header;                       //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * footer;                       //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(NSString *)header;
-(long long)numberOfRows;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)cellForRow:(long long)arg1 ;
@end

