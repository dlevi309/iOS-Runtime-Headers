/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVStackRow : NSObject {

	BOOL _hosted;
	BOOL _bounded;
	long long _sectionIndex;
	TVRowMetrics _rowMetrics;

}

@property (assign,nonatomic) TVRowMetrics rowMetrics;                    //@synthesize rowMetrics=_rowMetrics - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                //@synthesize hosted=_hosted - In the implementation block
@property (assign,getter=isBounded,nonatomic) BOOL bounded;              //@synthesize bounded=_bounded - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                     //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(void)setHosted:(BOOL)arg1 ;
-(BOOL)isHosted;
-(BOOL)isBounded;
-(TVRowMetrics)rowMetrics;
-(void)setRowMetrics:(TVRowMetrics)arg1 ;
-(void)setBounded:(BOOL)arg1 ;
@end

