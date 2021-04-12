/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class Protocol, NSString;

@interface _WKRemoteObjectInterface : NSObject {

	RetainPtr<NSString>* _identifier;
	HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >* _methods;
	Protocol* _protocol;

}

@property (nonatomic,readonly) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)safari_javaScriptClasses;
+(id)remoteObjectInterfaceWithProtocol:(id)arg1 ;
-(Protocol *)protocol;
-(const Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1 ;
-(id)debugDescription;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)initWithProtocol:(id)arg1 identifier:(id)arg2 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(const Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForSelector:(SEL)arg1 ;
-(NSString *)identifier;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ;
@end

