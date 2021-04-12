/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)rowCount;
-(unsigned long long)columnCount;
-(NSString *)rowHeight;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(BOOL)isPaged;
@end

