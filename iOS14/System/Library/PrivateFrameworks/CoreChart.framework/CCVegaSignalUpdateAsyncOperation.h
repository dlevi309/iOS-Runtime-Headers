/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString;

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _name;
	id _value;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id value;                                      //@synthesize value=_value - In the implementation block
-(CCVegaRenderer *)renderer;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)value;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
@end

