/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISImageDescriptor.h>

@class NSString;

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor> {

	double _pointSize;
	double _scale;
	unsigned long long _size;
	long long _weight;

}

@property (assign,nonatomic) double pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long weight;                      //@synthesize weight=_weight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)size;
-(double)scale;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(long long)weight;
-(double)pointSize;
-(void)setPointSize:(double)arg1 ;
@end

