/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectEncoder : NSCoder {

	RefPtr<API::Dictionary, WTF::DumbPtrTraits<API::Dictionary> >* _rootDictionary;
	Array* _objectStream;
	Dictionary* _currentDictionary;

}
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)requiresSecureCoding;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(Dictionary*)rootObjectDictionary;
@end

