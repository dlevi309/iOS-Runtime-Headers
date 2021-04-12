/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying> {

	IKMutableArray* _declarations;
	NSRange _range;

}

@property (nonatomic,readonly) IKMutableArray * declarations;              //@synthesize declarations=_declarations - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKMutableArray *)declarations;
-(id)declarationAtIndex:(unsigned long long)arg1 ;
-(void)addDeclaration:(id)arg1 ;
-(id)firstDeclaration;
-(id)lastDeclaration;
@end

