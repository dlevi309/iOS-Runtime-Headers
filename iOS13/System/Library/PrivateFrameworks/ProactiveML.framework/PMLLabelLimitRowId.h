/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PMLLabelLimitRowId : NSObject <NSCopying> {

	NSString* _label;
	long long _limit;
	long long _rowId;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long limit;               //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) long long rowId;               //@synthesize rowId=_rowId - In the implementation block
+(id)labelLimitRowIdWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)limit;
-(NSString *)label;
-(long long)rowId;
-(id)initWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3 ;
-(BOOL)isEqualToLabelLimitRowId:(id)arg1 ;
@end

