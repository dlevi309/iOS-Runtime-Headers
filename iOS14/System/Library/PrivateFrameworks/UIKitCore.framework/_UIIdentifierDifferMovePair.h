/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIIdentifierDifferMovePair.h>

@protocol _UIIdentifierDifferMovePair <NSObject>
@property (nonatomic,readonly) long long fromIndex; 
@property (nonatomic,readonly) long long toIndex; 
@required
-(long long)toIndex;
-(long long)fromIndex;

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
-(long long)toIndex;
-(long long)compare:(id)arg1 ;
-(long long)fromIndex;
-(NSString *)description;
-(void)setToIndex:(long long)arg1 ;
-(void)setFromIndex:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

