/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)declarationAtIndex:(unsigned long long)arg1 ;
-(IKMutableArray *)declarations;
-(void)addDeclaration:(id)arg1 ;
-(id)firstDeclaration;
-(id)lastDeclaration;
@end

