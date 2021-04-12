/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)columnNames;
-(long long)mode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithColumnNames:(id)arg1 mode:(long long)arg2 ;
@end

