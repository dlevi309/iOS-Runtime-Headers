/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDocument, NSString;

@interface CRRegister : NSObject <CRDataType, CRCoding> {

	CRDocument* _document;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 ;
+(id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(BOOL)isEqualContents:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
@end

