/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@interface BLPurchaseDAAPParser : NSObject
+(id)decodeData:(id)arg1 ;
+(id)sharedInstance;
+(id)typeForDRCPValueType:(long long)arg1 ;
+(id)decodeHexString:(id)arg1 ;
-(id)processResponseCode:(unsigned)arg1 bytes:(const char*)arg2 count:(long long)arg3 ;
-(void)unknownCode:(unsigned)arg1 bytes:(const char*)arg2 size:(long long)arg3 ;
-(id)processFlavor:(const char*)arg1 size:(long long)arg2 ;
-(void)setUInt16:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt32:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setString:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt8:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt64:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(unsigned long long)SwapInt64BigToHost:(const char*)arg1 size:(long long)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(long long)arg2 ;
-(void)setBool:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)parseMACAddressListing:(const char*)arg1 count:(long long)arg2 ;
-(void)parseDict:(const char*)arg1 size:(long long)arg2 intoDict:(id)arg3 ;
-(void)setDate:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)processFlavors:(const char*)arg1 size:(long long)arg2 ;
-(id)processXMLContent:(const char*)arg1 count:(long long)arg2 ;
-(id)parseUnicodeCharacter:(const char*)arg1 count:(long long)arg2 ;
-(void)setFloat32:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)parseListingCollection:(const char*)arg1 count:(long long)arg2 capacity:(int)arg3 ;
-(id)parseLogin:(const char*)arg1 count:(long long)arg2 ;
-(id)parseListingItem:(const char*)arg1 count:(long long)arg2 ;
-(id)parseDeletedIDsList:(const char*)arg1 count:(long long)arg2 ;
-(id)parseBrowseResults:(const char*)arg1 count:(long long)arg2 ;
-(id)parseControlPromptCollection:(const char*)arg1 count:(long long)arg2 ;
-(id)parseServerInfo:(const char*)arg1 count:(long long)arg2 ;
-(id)parseListingHeader:(const char*)arg1 count:(long long)arg2 ;
-(id)parseError:(const char*)arg1 count:(long long)arg2 ;
-(id)parseDACPPropertyResponse:(const char*)arg1 count:(long long)arg2 ;
-(id)parseControlPromptResponse:(const char*)arg1 count:(long long)arg2 ;
-(id)parseGetSpeakersResponse:(const char*)arg1 count:(long long)arg2 ;
-(void)setSInt8:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setSInt16:(const char*)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)parseContentCodes:(const char*)arg1 count:(long long)arg2 ;
@end

