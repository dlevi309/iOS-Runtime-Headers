/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)mergeWithMergableDictionary:(id)arg1 ;
-(id)description;
-(void)setUnderlyingDictionary:(CRDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithReplicaID:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CRDictionary *)underlyingDictionary;
-(CRDocument *)underlyingDocument;
-(void)setUnderlyingDocument:(CRDocument *)arg1 ;
@end

