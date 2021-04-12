/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, CRDocument, NSString;

@interface CRWeakReference : NSObject <CRDataType, CRCoding> {

	NSUUID* _identifier;
	CRDocument* _document;

}

@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contents;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 document:(id)arg2 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)initWithContents:(id)arg1 ;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
@end

