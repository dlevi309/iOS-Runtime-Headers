/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class Protocol, NSString;

@interface _WKRemoteObjectInterface : NSObject {

	RetainPtr<NSString>* _identifier;
	HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >* _methods;
	Protocol* _protocol;

}

@property (nonatomic,readonly) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)remoteObjectInterfaceWithProtocol:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Protocol *)protocol;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(const Vector<WTF::HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1 ;
-(const Vector<WTF::HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_allowedArgumentClassesForSelector:(SEL)arg1 ;
-(id)initWithProtocol:(id)arg1 identifier:(id)arg2 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ;
@end

