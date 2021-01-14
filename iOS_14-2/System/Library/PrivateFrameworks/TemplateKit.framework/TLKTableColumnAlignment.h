/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject {

	BOOL _isEqualWidth;
	unsigned long long _columnAlignment;
	long long _dataAlignment;

}

@property (assign,nonatomic) unsigned long long columnAlignment;              //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) long long dataAlignment;                         //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) BOOL isEqualWidth;                               //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
-(void)setColumnAlignment:(unsigned long long)arg1 ;
-(void)setDataAlignment:(long long)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(long long)textAlignment;
-(unsigned long long)columnAlignment;
-(long long)dataAlignment;
-(BOOL)isEqualWidth;
-(id)description;
@end

