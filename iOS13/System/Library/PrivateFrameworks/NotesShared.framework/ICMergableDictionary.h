/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class CRDocument, CRDictionary;

@interface ICMergableDictionary : NSObject {

	CRDocument* _underlyingDocument;
	CRDictionary* _underlyingDictionary;

}

@property (nonatomic,retain) CRDocument * underlyingDocument;                  //@synthesize underlyingDocument=_underlyingDocument - In the implementation block
@property (nonatomic,retain) CRDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
+(id)decodeDictionaryFromData:(id)arg1 ;
+(id)encodedDataWithDictionary:(id)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(CRDictionary *)underlyingDictionary;
-(id)initWithReplicaID:(id)arg1 ;
-(void)setUnderlyingDictionary:(CRDictionary *)arg1 ;
-(BOOL)mergeWithMergableDictionary:(id)arg1 ;
-(CRDocument *)underlyingDocument;
-(void)setUnderlyingDocument:(CRDocument *)arg1 ;
@end

