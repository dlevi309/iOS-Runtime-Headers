/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCoreSQLiteIndex.h>

@class NSString, NSArray;

@interface _SiriCoreSQLiteIndexInfo : NSObject <SiriCoreSQLiteIndex> {

	NSString* _name;
	NSArray* _columns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
-(NSString *)name;
-(NSArray *)columns;
-(id)initWithName:(id)arg1 columns:(id)arg2 ;
@end

