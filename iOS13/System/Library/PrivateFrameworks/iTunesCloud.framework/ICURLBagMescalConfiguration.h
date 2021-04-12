/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject {

	BOOL _shouldSignBody;
	NSArray* _fields;
	NSArray* _headers;

}

@property (assign,nonatomic) BOOL shouldSignBody;              //@synthesize shouldSignBody=_shouldSignBody - In the implementation block
@property (nonatomic,copy) NSArray * fields;                   //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * headers;                  //@synthesize headers=_headers - In the implementation block
-(id)description;
-(NSArray *)fields;
-(void)setHeaders:(NSArray *)arg1 ;
-(NSArray *)headers;
-(void)setFields:(NSArray *)arg1 ;
-(BOOL)shouldSignBody;
-(void)setShouldSignBody:(BOOL)arg1 ;
@end

