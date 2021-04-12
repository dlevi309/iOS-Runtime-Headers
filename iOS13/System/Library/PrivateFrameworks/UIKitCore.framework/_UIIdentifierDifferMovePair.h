/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIIdentifierDifferMovePair.h>

@protocol _UIIdentifierDifferMovePair <NSObject>
@property (nonatomic,readonly) long long fromIndex; 
@property (nonatomic,readonly) long long toIndex; 
@required
-(long long)fromIndex;
-(long long)toIndex;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIIdentifierDifferMovePair : NSObject <_UIIdentifierDifferMovePair, NSCopying> {

	long long _fromIndex;
	long long _toIndex;

}

@property (assign,nonatomic) long long fromIndex;                   //@synthesize fromIndex=_fromIndex - In the implementation block
@property (assign,nonatomic) long long toIndex;                     //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)fromIndex;
-(long long)toIndex;
-(id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)setFromIndex:(long long)arg1 ;
-(void)setToIndex:(long long)arg1 ;
@end

