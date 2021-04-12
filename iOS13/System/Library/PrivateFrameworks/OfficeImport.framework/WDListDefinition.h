/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, NSString, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mListDefinitionId;
	NSString* mStyleId;
	NSString* mStyleRefId;
	int mType;
	NSMutableArray* mLevels;

}

@property (nonatomic,readonly) int listDefinitionId; 
@property (nonatomic,readonly) NSString * styleId; 
@property (nonatomic,copy) NSString * styleRefId; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)levelCount;
-(NSString *)styleId;
-(int)listDefinitionId;
-(id)levelAt:(int)arg1 ;
-(id)addLevel;
-(void)removeLastLevel;
-(id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3 ;
-(NSString *)styleRefId;
-(void)setStyleRefId:(NSString *)arg1 ;
@end

