/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement {

	BOOL _paged;

}

@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (getter=isPaged,nonatomic,readonly) BOOL paged;                   //@synthesize paged=_paged - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount; 
-(NSString *)rowHeight;
-(unsigned long long)columnCount;
-(BOOL)isPaged;
-(unsigned long long)rowCount;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

