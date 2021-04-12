/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying> {

	long long _mode;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) long long mode;                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mode;
-(NSArray *)columnNames;
-(id)initWithColumnNames:(id)arg1 mode:(long long)arg2 ;
@end

