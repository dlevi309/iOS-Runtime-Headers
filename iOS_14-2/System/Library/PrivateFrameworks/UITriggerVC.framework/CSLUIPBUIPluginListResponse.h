/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _usages;

}

@property (nonatomic,retain) NSMutableArray * names;               //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * usages;              //@synthesize usages=_usages - In the implementation block
-(id)dictionaryRepresentation;
-(void)addUsage:(id)arg1 ;
-(unsigned long long)namesCount;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)usages;
-(void)addName:(id)arg1 ;
-(id)description;
-(NSMutableArray *)names;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)clearNames;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUsages:(NSMutableArray *)arg1 ;
-(unsigned long long)usagesCount;
-(void)clearUsages;
-(id)usageAtIndex:(unsigned long long)arg1 ;
@end

