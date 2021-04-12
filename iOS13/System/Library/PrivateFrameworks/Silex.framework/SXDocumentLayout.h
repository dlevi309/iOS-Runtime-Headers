/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentLayout.h>

@protocol SXDocumentLayout <NSObject>
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long margin; 
@property (nonatomic,readonly) long long gutter; 
@property (nonatomic,readonly) unsigned long long columns; 
@required
-(long long)width;
-(unsigned long long)columns;
-(long long)margin;
-(long long)gutter;

@end


@class NSString;

@interface SXDocumentLayout : NSObject <SXDocumentLayout> {

	long long _width;
	long long _margin;
	long long _gutter;
	unsigned long long _columns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long margin;                        //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) long long gutter;                        //@synthesize gutter=_gutter - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
-(NSString *)description;
-(long long)width;
-(unsigned long long)columns;
-(long long)margin;
-(long long)gutter;
-(id)initWithWidth:(long long)arg1 margin:(long long)arg2 gutter:(long long)arg3 columns:(unsigned long long)arg4 ;
@end

