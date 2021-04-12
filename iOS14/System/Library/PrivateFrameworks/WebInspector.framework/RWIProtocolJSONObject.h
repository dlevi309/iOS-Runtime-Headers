/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolJSONObject : NSObject {

	RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >* _object;

}
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)removeKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)initWithJSONObject:(const Object*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >*)toJSONObject;
-(void)setJSONArray:(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)arg1 forKey:(id)arg2 ;
-(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)JSONArrayForKey:(id)arg1 ;
@end

