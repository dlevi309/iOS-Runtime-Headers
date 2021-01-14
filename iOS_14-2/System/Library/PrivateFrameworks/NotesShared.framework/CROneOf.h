/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>

@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType> {

	CRSet* _set;
	NSMapTable* _timestamps;

}

@property (nonatomic,retain) NSMapTable * timestamps;               //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) CRSet * set;                           //@synthesize set=_set - In the implementation block
@property (nonatomic,retain) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addItem:(id)arg1 ;
-(id)contents;
-(void)setSet:(CRSet *)arg1 ;
-(id)init;
-(NSMapTable *)timestamps;
-(void)setTimestamps:(NSMapTable *)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(id)timestampForNewItem;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)setUpdated:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(CRSet *)set;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
@end

