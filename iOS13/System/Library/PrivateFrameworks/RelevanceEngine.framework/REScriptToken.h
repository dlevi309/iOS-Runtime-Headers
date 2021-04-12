/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REScriptToken : NSObject <NSCopying> {

	long long _line;
	long long _column;
	NSString* _value;
	unsigned long long _type;

}

@property (nonatomic,readonly) long long line;                         //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) long long column;                       //@synthesize column=_column - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSString *)value;
-(long long)line;
-(long long)column;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 line:(long long)arg3 column:(long long)arg4 ;
@end

