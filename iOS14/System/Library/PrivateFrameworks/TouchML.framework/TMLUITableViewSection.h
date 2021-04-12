/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)footer;
-(void)setHeader:(NSString *)arg1 ;
-(void)setRows:(NSArray *)arg1 ;
-(long long)numberOfRows;
-(NSString *)header;
-(NSArray *)rows;
-(void)setFooter:(NSString *)arg1 ;
-(id)cellForRow:(long long)arg1 ;
@end

